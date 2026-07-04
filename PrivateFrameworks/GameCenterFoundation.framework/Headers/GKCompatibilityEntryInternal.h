/* Runtime dump - GKCompatibilityEntryInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCompatibilityEntryInternal : GKInternalRepresentation
{
    NSString * _bundleID;
    NSSet * _versions;
}

@property (retain, nonatomic) NSString * bundleID;
@property (retain, nonatomic) NSSet * versions;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)bundleID;
- (void)setBundleID:(NSString *)arg0;
- (NSSet *)versions;
- (void)setVersions:(NSSet *)arg0;

@end
