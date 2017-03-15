/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SDWebImageOperation.h"

@class NSOperation, NSString;

@interface SDWebImageCombinedOperation : XXUnknownSuperclass <SDWebImageOperation> {
	BOOL _cancelled;
	id _cancelBlock;
	NSOperation* _cacheOperation;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSOperation* cacheOperation;
@property(copy, nonatomic) id cancelBlock;
@property(assign, nonatomic, getter=isCancelled) BOOL cancelled;
-(void).cxx_destruct;
-(void)cancel;
@end
