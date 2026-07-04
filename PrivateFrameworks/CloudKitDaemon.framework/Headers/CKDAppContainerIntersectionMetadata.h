/* Runtime dump - CKDAppContainerIntersectionMetadata
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAppContainerIntersectionMetadata : NSObject
{
    int _tokenRegistered;
    int _usesAPSPublicToken;
    int _darkWakeEnabled;
}

@property (nonatomic) int tokenRegistered;
@property (nonatomic) int usesAPSPublicToken;
@property (nonatomic) int darkWakeEnabled;

- (CKDAppContainerIntersectionMetadata *)init;
- (void)setUsesAPSPublicToken:(int)arg0;
- (void)setDarkWakeEnabled:(int)arg0;
- (int)usesAPSPublicToken;
- (int)darkWakeEnabled;
- (int)tokenRegistered;
- (void)setTokenRegistered:(int)arg0;

@end
