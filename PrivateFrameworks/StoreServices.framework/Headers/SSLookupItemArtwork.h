/* Runtime dump - SSLookupItemArtwork
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupItemArtwork : NSObject
{
    NSDictionary * _dictionary;
}

@property (readonly, nonatomic) NSDictionary * lookupDictionary;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) NSURL * URL;

- (id)MP_colorForColorKind:(id)arg0;
- (id)URLWithHeight:(int)arg0 width:(int)arg1 cropStyle:(NSString *)arg2 format:(unsigned int)arg3;
- (char)getRed:(double *)arg0 green:(double *)arg1 blue:(double *)arg2 alpha:(double *)arg3 forColorKind:(id)arg4;
- (void)dealloc;
- (int)width;
- (int)height;
- (NSURL *)URL;
- (NSDictionary *)lookupDictionary;
- (SSLookupItemArtwork *)initWithLookupDictionary:(NSDictionary *)arg0;
- (id)URLWithHeight:(int)arg0 width:(int)arg1;
- (id)URLWithHeight:(int)arg0 width:(int)arg1 format:(unsigned int)arg2;

@end
