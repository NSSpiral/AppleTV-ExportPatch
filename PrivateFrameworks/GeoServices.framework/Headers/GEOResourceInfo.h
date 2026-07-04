/* Runtime dump - GEOResourceInfo
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResourceInfo : NSObject
{
    NSString * _name;
    int _type;
    NSString * _checksum;
    NSArray * _equivalentResources;
    char _allowResumingPartialDownload;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString * checksum;
@property (copy, nonatomic) NSArray * equivalentResources;
@property (nonatomic) char allowResumingPartialDownload;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (int)type;
- (GEOResourceInfo *)initWithName:(NSString *)arg0 type:(int)arg1 checksum:(NSString *)arg2;
- (NSString *)checksum;
- (void)setEquivalentResources:(NSArray *)arg0;
- (NSArray *)equivalentResources;
- (char)_allowResumingPartialDownload;
- (void)_setAllowResumingPartialDownload:(char)arg0;

@end
