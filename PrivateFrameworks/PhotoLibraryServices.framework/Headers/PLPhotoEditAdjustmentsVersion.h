/* Runtime dump - PLPhotoEditAdjustmentsVersion
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditAdjustmentsVersion : NSObject
{
    unsigned int _majorVersion;
    unsigned int _minorVersion;
    NSString * _platform;
}

@property (readonly, nonatomic) NSString * string;
@property (readonly, nonatomic) unsigned int majorVersion;
@property (readonly, nonatomic) unsigned int minorVersion;
@property (readonly, copy, nonatomic) NSString * platform;

+ (PLPhotoEditAdjustmentsVersion *)versionWithMajor:(unsigned int)arg0 minor:(unsigned int)arg1 platform:(NSString *)arg2;
+ (NSString *)versionFromString:(NSString *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (NSString *)string;
- (PLPhotoEditAdjustmentsVersion *)initWithMajor:(unsigned int)arg0 minor:(unsigned int)arg1 platform:(NSString *)arg2;
- (unsigned int)majorVersion;
- (unsigned int)minorVersion;
- (char)isEqualToAdjustmentVersion:(NSString *)arg0;
- (PLPhotoEditAdjustmentsVersion *)initWithMajor:(unsigned int)arg0 minor:(unsigned int)arg1;
- (NSString *)platform;

@end
