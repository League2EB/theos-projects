/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface IndexRestriction : XXUnknownSuperclass {
	NSCharacterSet* _locale;
	NSCharacterSet* _language;
	NSCharacterSet* _latin;
	NSCharacterSet* _cyrillic;
	NSCharacterSet* _combined;
}
@property(retain, nonatomic) NSCharacterSet* combined;
@property(retain, nonatomic) NSCharacterSet* cyrillic;
@property(retain, nonatomic) NSCharacterSet* latin;
@property(retain, nonatomic) NSCharacterSet* language;
@property(retain, nonatomic) NSCharacterSet* locale;
-(void).cxx_destruct;
-(int)compareSectionKeys:(id)keys :(id)arg2;
-(id)sectionKeyForLastName:(id)lastName;
-(id)init;
@end

