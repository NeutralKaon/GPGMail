//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSArray;

@interface IMAPEnableCommand : IMAPSingleCommand
{
    NSArray *_capabilities;	// 56 = 0x38
}

@property(readonly, copy, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
- (void).cxx_destruct;	// IMP=0x000000000000f97c
- (BOOL)handlesAllUntaggedResponses;	// IMP=0x000000000000f95e
- (long long)maxAllowedConnectionState;	// IMP=0x000000000000f953
- (long long)minRequiredConnectionState;	// IMP=0x000000000000f948
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x000000000000f92d
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x000000000000f785
- (id)activityString;	// IMP=0x000000000000f719
- (id)commandTypeString;	// IMP=0x000000000000f6fa
- (id)init;	// IMP=0x000000000000f62b
- (id)initWithCapabilities:(id)arg1;	// IMP=0x000000000000f5b0

@end

