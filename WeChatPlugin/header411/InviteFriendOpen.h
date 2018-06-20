//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface InviteFriendOpen : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasFriendType:1;
    unsigned int friendType;
    NSString *userName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetFriendType:) unsigned int friendType; // @synthesize friendType;
@property(readonly, nonatomic) BOOL hasFriendType; // @synthesize hasFriendType;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end
