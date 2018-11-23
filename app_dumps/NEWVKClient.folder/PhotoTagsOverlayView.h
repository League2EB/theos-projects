/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, VKPhotoTag, NSArray, VKPhotoTags;
@protocol PhotoTagsOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface PhotoTagsOverlayView : XXUnknownSuperclass {
	NSArray* _focusViews;
	id<PhotoTagsOverlayViewDelegate> _delegate;
	VKPhotoTag* _selectedTag;
	VKPhotoTags* _tags;
	UIView* _focusView;
	CGRect _photoRect;
}
@property(assign, nonatomic) CGRect photoRect;
@property(retain, nonatomic) UIView* focusView;
@property(retain, nonatomic) VKPhotoTags* tags;
@property(retain, nonatomic) VKPhotoTag* selectedTag;
@property(assign, nonatomic) __weak id<PhotoTagsOverlayViewDelegate> delegate;
-(void).cxx_destruct;
-(void)setSelectedTag:(id)tag animated:(BOOL)animated;
-(void)layoutFocusViewsForFrame:(CGRect)frame;
-(void)setActive:(BOOL)active animated:(BOOL)animated;
-(void)performBlock:(id)block animated:(BOOL)animated;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)tagAtPoint:(CGPoint)point;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGRect)frameForImage;
-(CGRect)frameForTag:(id)tag;
-(id)initWithFrame:(CGRect)frame;
@end
