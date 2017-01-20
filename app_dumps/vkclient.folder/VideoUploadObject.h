/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class VideoUploadEditAttachment, VKVideo;

__attribute__((visibility("hidden")))
@interface VideoUploadObject : VKRenderable {
	VideoUploadEditAttachment* _uploadAttachment;
	VKVideo* _resultVideo;
}
@property(retain, nonatomic) VKVideo* resultVideo;
@property(retain, nonatomic) VideoUploadEditAttachment* uploadAttachment;
+(id)withAttach:(id)attach;
-(BOOL)isUploadForOwner:(id)owner;
-(Class)cellClass;
-(void)dealloc;
@end
