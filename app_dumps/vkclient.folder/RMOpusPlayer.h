/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class NSString, NSData;
@protocol RMOpusPlayerDelegate;

@interface RMOpusPlayer : XXUnknownSuperclass {
	OpaqueAudioQueue* _queue;
	AudioQueueBuffer* _queueBuffers[3];
	VKOpusDecRef _decoder;
	BOOL _running;
	id<RMOpusPlayerDelegate> _delegate;
	int _state;
	NSString* _path;
	NSData* _data;
}
@property(assign, nonatomic) id<RMOpusPlayerDelegate> delegate;
@property(readonly, assign, nonatomic) double progress;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) double currentTime;
@property(retain, nonatomic) NSData* data;
@property(copy, nonatomic) NSString* path;
@property(assign, nonatomic, getter=isRunning) BOOL running;
@property(assign, nonatomic) int state;
-(BOOL)isPlaying;
-(BOOL)stopImmediate:(BOOL)immediate;
-(BOOL)stop;
-(BOOL)pause;
-(BOOL)play;
-(void)primeQueueBuffers;
-(void)cleanup;
-(void)dealloc;
-(id)initWithPath:(id)path;
-(id)initWithData:(id)data;
-(id)init;
-(void)isRunningChanged;
-(void)readBuffer:(AudioQueueBuffer*)buffer;
@end
