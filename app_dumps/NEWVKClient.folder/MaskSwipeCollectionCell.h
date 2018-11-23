/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class UIView, VKMImageView, VKMask;

__attribute__((visibility("hidden")))
@interface MaskSwipeCollectionCell : XXUnknownSuperclass {
	VKMask* _mask;
	VKMImageView* _imageView;
	UIView* _dotView;
	unsigned _state;
}
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) UIView* dotView;
@property(retain, nonatomic) VKMImageView* imageView;
@property(retain, nonatomic) VKMask* mask;
+(float)scaleForState:(unsigned)state;
+(float)sizeForState:(unsigned)state;
-(void).cxx_destruct;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)frame;
@end
