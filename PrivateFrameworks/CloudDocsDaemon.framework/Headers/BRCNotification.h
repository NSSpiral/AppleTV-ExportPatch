/* Runtime dump - BRCNotification
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotification : BRQueryItem
{
    BRCItemID * _itemID;
    BRCItemID * _parentID;
    NSSet * _parentIDs;
    NSMutableSet * _containerIDsWithReverseAliases;
    BRCLocalContainer * _container;
    NSString * _aliasContainerID;
    NSString * _unsaltedBookmarkData;
    unsigned long long _oldParentFileID;
    unsigned long long _parentFileID;
}

@property (readonly, nonatomic) BRCLocalContainer * container;
@property (readonly, nonatomic) NSString * aliasContainerID;
@property (readonly, nonatomic) BRCItemID * itemID;
@property (readonly, nonatomic) BRCItemID * parentID;
@property (readonly, nonatomic) unsigned long long oldParentFileID;
@property (readonly, nonatomic) unsigned long long parentFileID;
@property (readonly, nonatomic) NSNumber * oldParentFileObjectID;
@property (readonly, nonatomic) NSNumber * parentFileObjectID;
@property (retain, nonatomic) NSSet * parentIDs;
@property (retain, nonatomic) NSMutableSet * containerIDsWithReverseAliases;
@property (retain, nonatomic) NSString * unsaltedBookmarkData;
@property (readonly, nonatomic) NSURL * url;

+ (char)supportsSecureCoding;
+ (NSObject *)notificationGatheredFromItem:(NSObject *)arg0;
+ (NSObject *)notificationWithAliasItem:(NSObject *)arg0 targetItemNotification:(NSNotification *)arg1;

- (BRCNotification *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (BRCLocalContainer *)container;
- (void).cxx_destruct;
- (BRCItemID *)itemID;
- (BRCItemID *)parentID;
- (unsigned long long)parentFileID;
- (BRCNotification *)initWithAliasItem:(NSObject *)arg0 itemDiffs:(unsigned long long)arg1;
- (BRCNotification *)initWithLocalItem:(char)arg0 itemDiffs:(unsigned long long)arg1;
- (void)_addAliasDecoration:(id)arg0;
- (void)merge:(char)arg0;
- (NSString *)subclassDescription;
- (NSNumber *)oldParentFileObjectID;
- (NSNumber *)parentFileObjectID;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (char)canMerge:(CPTextLineMerge *)arg0;
- (void)generateLogicalExtension:(id)arg0 physicalExtension:(id)arg1;
- (unsigned long long)oldParentFileID;
- (NSSet *)parentIDs;
- (void)setParentIDs:(NSSet *)arg0;
- (NSMutableSet *)containerIDsWithReverseAliases;
- (void)setContainerIDsWithReverseAliases:(NSMutableSet *)arg0;
- (NSString *)aliasContainerID;
- (NSString *)unsaltedBookmarkData;
- (void)setUnsaltedBookmarkData:(NSString *)arg0;

@end
