/* Runtime dump - GKUnauthenticatedPlayerInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal
{
    int _encodingCount;
}

- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (CKDPUserAlias *)alias;
- (NSString *)playerID;

@end
