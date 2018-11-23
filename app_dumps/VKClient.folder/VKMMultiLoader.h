/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKMImageLoaderDelegate.h"

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, VKMLoadedImage;
@protocol MultiImageLoaderDelegate;

__attribute__((visibility("hidden")))
@interface VKMMultiLoader : XXUnknownSuperclass <VKMImageLoaderDelegate> {
	NSArray* _urls;
	id<MultiImageLoaderDelegate> _delegate;
	NSMutableArray* _loaders;
	NSMutableDictionary* _resultImagesOrNils;
	VKMLoadedImage* _lastDiscardableObject;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MultiImageLoaderDelegate> delegate;
@property(retain, nonatomic) NSArray* urls;
@property(retain, nonatomic) VKMLoadedImage* lastDiscardableObject;
@property(retain, nonatomic) NSMutableDictionary* resultImagesOrNils;
@property(retain, nonatomic) NSMutableArray* loaders;
-(void).cxx_destruct;
-(void)clear;
-(void)reuse;
-(void)cancel;
-(void)loadUrls:(id)urls reuse:(double)reuse;
-(void)multiImage:(id)image handler:(id)handler;
-(void)loader:(id)loader complete:(id)complete;
-(id)multiImageUrlsKey:(id)key;
-(void)notificationMemory:(id)memory;
-(id)init;
-(void)dealloc;
@end
