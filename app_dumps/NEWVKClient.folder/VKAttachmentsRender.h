/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"
#import "VKClient-Structs.h"

@class VKAttachments;

__attribute__((visibility("hidden")))
@interface VKAttachmentsRender : VKRenderable {
	BOOL _imagesOnly;
	BOOL _selectable;
	BOOL _padding;
	BOOL _fullscreen;
	BOOL _stickersLeftAlignment;
	VKAttachments* _attachments;
	id _photosSource;
	int _albumIndex;
	float _width;
	CGPoint _target;
}
@property(assign, nonatomic) CGPoint target;
@property(assign, nonatomic) float width;
@property(assign, nonatomic) BOOL stickersLeftAlignment;
@property(assign, nonatomic) BOOL fullscreen;
@property(assign, nonatomic) BOOL padding;
@property(assign, nonatomic) BOOL selectable;
@property(assign, nonatomic) int albumIndex;
@property(assign, nonatomic) BOOL imagesOnly;
@property(retain, nonatomic) id photosSource;
@property(retain, nonatomic) VKAttachments* attachments;
+(id)attachments:(id)attachments source:(id)source imagesOnly:(BOOL)only albumIndex:(int)index selectable:(BOOL)selectable padding:(BOOL)padding fullscreen:(BOOL)fullscreen;
-(void).cxx_destruct;
-(id)photos;
-(id)thumbnails;
-(Class)rendererClass;
@end

