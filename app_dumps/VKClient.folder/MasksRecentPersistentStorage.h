/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKStats, NSArray;

__attribute__((visibility("hidden")))
@interface MasksRecentPersistentStorage : XXUnknownSuperclass {
	VKStats* _stats;
	NSArray* _masks;
}
@property(retain, nonatomic) NSArray* masks;
@property(retain, nonatomic) VKStats* stats;
-(void).cxx_destruct;
-(void)handleMaskIden:(id)iden;
-(void)store;
-(void)load;
-(id)initWithStats:(id)stats;
@end
