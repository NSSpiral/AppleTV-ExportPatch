/* Runtime dump - MSVCLICommand
 * Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVCLICommand : NSObject
{
    NSDictionary * _cachedOptionsDictionary;
    NSString * _name;
    NSArray * _options;
}

@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * options;
@property (readonly, nonatomic) NSDictionary * optionsDictionary;

- (MSVCLICommand *)init;
- (NSString *)description;
- (NSString *)name;
- (NSArray *)options;
- (void).cxx_destruct;
- (MSVCLICommand *)initWithName:(NSString *)arg0 options:(NSArray *)arg1;
- (NSDictionary *)optionsDictionary;
- (char)containsOption:(id)arg0;
- (id)valueForOption:(AVMediaSelectionKeyValueOption *)arg0;

@end
