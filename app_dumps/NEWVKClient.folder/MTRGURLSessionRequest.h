/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGURLRequestProtocol.h"
#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionTaskDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableDictionary, NSURLSession;

@interface MTRGURLSessionRequest : XXUnknownSuperclass <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, MTRGURLRequestProtocol> {
	NSURLSession* _session;
	NSMutableDictionary* _redirectTasks;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)URLSession:(id)session task:(id)task didCompleteWithError:(id)error;
-(void)URLSession:(id)session dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id)handler;
-(void)URLSession:(id)session task:(id)task willPerformHTTPRedirection:(id)redirection newRequest:(id)request completionHandler:(id)handler;
-(void)redirectRequestWithUrl:(id)url completionBlock:(id)block;
-(void)downloadRequestWithRequest:(id)request toFilePath:(id)filePath completionBlock:(id)block;
-(void)uploadRequestWithRequest:(id)request fromData:(id)data completionBlock:(id)block;
-(void)dataRequestWithRequest:(id)request completionBlock:(id)block;
-(id)init;
@end

