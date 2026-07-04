/* Runtime dump - RadioTrackAsset
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackAsset : NSObject
{
    NSDictionary * _responseDictionary;
}

@property (readonly, copy, nonatomic) NSString * downloadKey;
@property (readonly, copy, nonatomic) NSString * flavor;
@property (readonly, copy, nonatomic) NSArray * sinfs;
@property (readonly, retain, nonatomic) NSURL * URL;
@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;

- (RadioTrackAsset *)initWithResponseDictionary:(NSDictionary *)arg0;
- (NSString *)flavor;
- (NSArray *)sinfs;
- (NSString *)downloadKey;
- (NSURL *)URL;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;

@end
