/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BFTask;

@interface BFTaskCompletionSource : XXUnknownSuperclass {
	BFTask* _task;
}
@property(retain, nonatomic) BFTask* task;
+(id)taskCompletionSource;
-(void).cxx_destruct;
-(BOOL)trySetCancelled;
-(BOOL)trySetException:(id)exception;
-(BOOL)trySetError:(id)error;
-(BOOL)trySetResult:(id)result;
-(void)cancel;
-(void)setException:(id)exception;
-(void)setError:(id)error;
-(void)setResult:(id)result;
-(id)init;
@end
