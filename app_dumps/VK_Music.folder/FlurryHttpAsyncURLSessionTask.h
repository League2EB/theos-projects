/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IFlurryHttpAsyncTask.h"

@class NSString, NSMutableDictionary, NSURLSessionTask;

@interface FlurryHttpAsyncURLSessionTask : XXUnknownSuperclass <IFlurryHttpAsyncTask> {
	NSString* _tag;
	int _redirectsLimit;
	NSMutableDictionary* _taskParams;
	int _redirectsCount;
	NSURLSessionTask* _task;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSURLSessionTask* task;
@property(assign, nonatomic) int redirectsCount;
@property(retain, nonatomic) NSMutableDictionary* taskParams;
@property(assign, nonatomic) int redirectsLimit;
@property(retain, nonatomic) NSString* tag;
+(id)urlWithProtocol:(id)protocol host:(id)host port:(int)port path:(id)path query:(id)query;
+(id)stringToQueryDictionary:(id)queryDictionary;
+(id)queryDictionaryToString:(id)string;
+(id)sendMethod:(id)method to:(id)to body:(id)body headerFields:(id)fields timeoutInterval:(int)interval useCachePolicy:(unsigned)policy delegate:(id)delegate startImmediately:(BOOL)immediately;
+(id)sessionWithConfiguration:(id)configuration delgate:(id)delgate;
+(id)sendMethod:(id)method to:(id)to body:(id)body headerFields:(id)fields delegate:(id)delegate startImmediately:(BOOL)immediately;
+(id)sendMethod:(id)method to:(id)to body:(id)body headerFields:(id)fields delegate:(id)delegate;
+(id)post:(id)post body:(id)body headerFields:(id)fields delegate:(id)delegate;
+(id)post:(id)post body:(id)body delegate:(id)delegate;
+(id)get:(id)get headerFields:(id)fields delegate:(id)delegate;
+(id)get:(id)get delegate:(id)delegate;
-(void).cxx_destruct;
-(void)cancelTask;
-(void)startInRunLoop:(id)runLoop;
-(id)init;
@end
