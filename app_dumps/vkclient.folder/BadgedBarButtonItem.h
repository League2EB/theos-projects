/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vkclient-Structs.h"

@class VKPPBadge, UIButton, NSString;

__attribute__((visibility("hidden")))
@interface BadgedBarButtonItem : XXUnknownSuperclass {
	int applied;
	CGPoint badgeCenter;
	VKPPBadge* _badge;
	UIButton* _button;
	NSString* _nameForAccessibility;
}
@property(retain, nonatomic) NSString* nameForAccessibility;
@property(retain, nonatomic) UIButton* button;
@property(retain, nonatomic) VKPPBadge* badge;
+(id)badgedButton:(id)button target:(id)target action:(SEL)action width:(float)width;
-(void)useBadgeNumber:(int)number;
-(void)dealloc;
@end
