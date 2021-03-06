/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelRenderContext.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSObject.h"
#import "VKClient-Structs.h"

@class NSString, NSDictionary;

@protocol ModelRenderContext <NSObject>
@property(retain, nonatomic) NSDictionary* userInfo;
@property(assign, nonatomic) CGSize maxSize;
@end

__attribute__((visibility("hidden")))
@interface ModelRenderContext : XXUnknownSuperclass <ModelRenderContext> {
	NSDictionary* _userInfo;
	int _renderContext;
	CGSize _maxSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int renderContext;
@property(retain, nonatomic) NSDictionary* userInfo;
@property(assign, nonatomic) CGSize maxSize;
-(void)dealloc;
@end

