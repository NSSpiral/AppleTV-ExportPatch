/* Runtime dump - CKDPSubscription
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscription : PBCodable <NSCopying>
{
    struct ? _mutationTriggers;
    int _evaluationType;
    NSMutableArray * _filters;
    CKDPIdentifier * _identifier;
    CKDPSubscriptionNotification * _notification;
    int _owner;
    NSMutableArray * _recordTypes;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
    char _fireOnce;
    struct ? _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier * identifier;
@property (nonatomic) char hasEvaluationType;
@property (nonatomic) int evaluationType;
@property (nonatomic) char hasOwner;
@property (nonatomic) int owner;
@property (readonly, nonatomic) unsigned int mutationTriggersCount;
@property (readonly, nonatomic) int * mutationTriggers;
@property (readonly, nonatomic) char hasNotification;
@property (retain, nonatomic) CKDPSubscriptionNotification * notification;
@property (retain, nonatomic) NSMutableArray * filters;
@property (retain, nonatomic) NSMutableArray * recordTypes;
@property (nonatomic) char hasFireOnce;
@property (nonatomic) char fireOnce;
@property (readonly, nonatomic) char hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier * zoneIdentifier;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPSubscriptionNotification *)notification;
- (CKDPIdentifier *)identifier;
- (CKDPSubscription *)copyWithZone:(struct _NSZone *)arg0;
- (void)setFilters:(NSMutableArray *)arg0;
- (void)setIdentifier:(CKDPIdentifier *)arg0;
- (NSMutableArray *)filters;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)owner;
- (void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg0;
- (char)hasZoneIdentifier;
- (CKDPRecordZoneIdentifier *)zoneIdentifier;
- (char)hasIdentifier;
- (void)addFilters:(id)arg0;
- (unsigned int)filtersCount;
- (void)clearFilters;
- (NSObject *)filtersAtIndex:(unsigned int)arg0;
- (void)addRecordTypes:(NSArray *)arg0;
- (unsigned int)mutationTriggersCount;
- (void)clearMutationTriggers;
- (int)mutationTriggersAtIndex:(unsigned int)arg0;
- (void)addMutationTriggers:(int)arg0;
- (void)setNotification:(CKDPSubscriptionNotification *)arg0;
- (unsigned int)recordTypesCount;
- (void)clearRecordTypes;
- (NSObject *)recordTypesAtIndex:(unsigned int)arg0;
- (void)setEvaluationType:(int)arg0;
- (void)setHasEvaluationType:(char)arg0;
- (char)hasEvaluationType;
- (void)setHasOwner:(char)arg0;
- (char)hasOwner;
- (int *)mutationTriggers;
- (void)setMutationTriggers:(int *)arg0 count:(unsigned int)arg1;
- (char)hasNotification;
- (void)setFireOnce:(char)arg0;
- (void)setHasFireOnce:(char)arg0;
- (char)hasFireOnce;
- (int)evaluationType;
- (NSMutableArray *)recordTypes;
- (void)setRecordTypes:(NSMutableArray *)arg0;
- (char)fireOnce;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setOwner:(int)arg0;

@end
