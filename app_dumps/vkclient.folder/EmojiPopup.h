/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface EmojiPopup : XXUnknownSuperclass {
	UIImageView* _decorationView;
	UILabel* _label;
}
@property(retain, nonatomic) UILabel* label;
@property(retain, nonatomic) UIImageView* decorationView;
-(void)setEmoji:(id)emoji;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
