//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface VoipRedirectResp : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasRoomId:1;
    unsigned int hasRelayAddrCount:1;
    unsigned int hasPunchAddrCount:1;
    unsigned int hasRoomKey:1;
    unsigned int hasRoomMemberId:1;
    unsigned int hasTcpAddrCount:1;
    int roomId;
    int relayAddrCount;
    int punchAddrCount;
    int roomMemberId;
    int tcpAddrCount;
    BaseResponse *baseResponse;
    NSMutableArray *mutableRelayAddrListList;
    NSMutableArray *mutablePunchAddrListList;
    long long roomKey;
    NSMutableArray *mutableTcpAddrListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableTcpAddrListList; // @synthesize mutableTcpAddrListList;
@property(nonatomic, setter=SetTcpAddrCount:) int tcpAddrCount; // @synthesize tcpAddrCount;
@property(readonly, nonatomic) BOOL hasTcpAddrCount; // @synthesize hasTcpAddrCount;
@property(nonatomic, setter=SetRoomMemberId:) int roomMemberId; // @synthesize roomMemberId;
@property(readonly, nonatomic) BOOL hasRoomMemberId; // @synthesize hasRoomMemberId;
@property(nonatomic, setter=SetRoomKey:) long long roomKey; // @synthesize roomKey;
@property(readonly, nonatomic) BOOL hasRoomKey; // @synthesize hasRoomKey;
@property(retain, nonatomic) NSMutableArray *mutablePunchAddrListList; // @synthesize mutablePunchAddrListList;
@property(nonatomic, setter=SetPunchAddrCount:) int punchAddrCount; // @synthesize punchAddrCount;
@property(readonly, nonatomic) BOOL hasPunchAddrCount; // @synthesize hasPunchAddrCount;
@property(retain, nonatomic) NSMutableArray *mutableRelayAddrListList; // @synthesize mutableRelayAddrListList;
@property(nonatomic, setter=SetRelayAddrCount:) int relayAddrCount; // @synthesize relayAddrCount;
@property(readonly, nonatomic) BOOL hasRelayAddrCount; // @synthesize hasRelayAddrCount;
@property(nonatomic, setter=SetRoomId:) int roomId; // @synthesize roomId;
@property(readonly, nonatomic) BOOL hasRoomId; // @synthesize hasRoomId;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addTcpAddrList:(id)arg1;
- (void)addTcpAddrListFromArray:(id)arg1;
- (void)addPunchAddrList:(id)arg1;
- (void)addPunchAddrListFromArray:(id)arg1;
- (void)addRelayAddrList:(id)arg1;
- (void)addRelayAddrListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *tcpAddrList; // @dynamic tcpAddrList;
- (id)tcpAddrListList;
@property(retain, nonatomic) NSMutableArray *punchAddrList; // @dynamic punchAddrList;
- (id)punchAddrListList;
@property(retain, nonatomic) NSMutableArray *relayAddrList; // @dynamic relayAddrList;
- (id)relayAddrListList;
- (id)init;

@end
