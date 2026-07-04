/* Runtime dump - PLPhotoEffect
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEffect : NSObject
{
    NSString * _filterIdentifier;
    NSString * _displayName;
    NSString * _CIFilterName;
}

@property (readonly, copy, nonatomic) NSString * filterIdentifier;
@property (readonly, copy, nonatomic) NSString * displayName;
@property (readonly, copy, nonatomic) NSString * CIFilterName;
@property (readonly, nonatomic) int latestVersion;

+ (NSString *)effectWithCIFilterName:(NSString *)arg0;
+ (NSString *)effectWithIdentifier:(NSString *)arg0;
+ (NSString *)_effectWithIdentifier:(NSString *)arg0 CIFilterName:(NSString *)arg1 displayName:(NSString *)arg2;
+ (PLPhotoEffect *)allEffects;
+ (unsigned int)indexOfEffectWithIdentifier:(NSString *)arg0;

- (NSString *)description;
- (NSString *)displayName;
- (int)latestVersion;
- (NSString *)filterIdentifier;
- (NSObject *)newEffectFilter;
- (NSString *)CIFilterName;

@end
