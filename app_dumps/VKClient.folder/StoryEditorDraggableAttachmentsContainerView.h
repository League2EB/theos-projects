/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIRotationGestureRecognizer, NSMutableArray, DeleteAreaView, UIView, NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer;
@protocol DraggableAttachment, StoryEditorDraggableAttachmentsContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface StoryEditorDraggableAttachmentsContainerView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	BOOL _deleteAttachmentOnRelease;
	id<StoryEditorDraggableAttachmentsContainerViewDelegate> _delegate;
	UIRotationGestureRecognizer* _rotationGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UIPanGestureRecognizer* _panGesture;
	UIView* _attachmentsContainer;
	NSMutableArray* _attachments;
	id<DraggableAttachment> _currentDraggableAttachment;
	DeleteAreaView* _deleteAreaView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<StoryEditorDraggableAttachmentsContainerViewDelegate> delegate;
@property(assign, nonatomic) BOOL deleteAttachmentOnRelease;
@property(retain, nonatomic) DeleteAreaView* deleteAreaView;
@property(retain, nonatomic) id<DraggableAttachment> currentDraggableAttachment;
@property(retain, nonatomic) NSMutableArray* attachments;
@property(retain, nonatomic) UIView* attachmentsContainer;
@property(retain, nonatomic) UIPanGestureRecognizer* panGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer* pinchGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer* rotationGesture;
-(void).cxx_destruct;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)handleRotationGestureChange:(id)change;
-(void)handlePinchGestureChange:(id)change;
-(void)handlePanGestureChange:(id)change;
-(void)actionGesture:(id)gesture;
-(void)setDeleteAreaActive:(BOOL)active animated:(BOOL)animated;
-(void)updateDeleteAreaStateForLocation:(CGPoint)location;
-(void)setDeleteAreaHidden:(BOOL)hidden animated:(BOOL)animated animationDelay:(double)delay completion:(id)completion;
-(void)setCurrentDraggableAttachmentToNilIfNoGesturesRunning;
-(void)drawAttachmentsLayerInRect:(CGRect)rect;
-(id)attachmentsCopy;
-(void)removeDraggableAttachment:(id)attachment;
-(void)addDraggableAttachment:(id)attachment;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)initWithFrame:(CGRect)frame;
@end

