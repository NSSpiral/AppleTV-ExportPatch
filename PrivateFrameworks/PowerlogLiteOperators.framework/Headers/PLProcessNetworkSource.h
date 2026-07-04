/* Runtime dump - PLProcessNetworkSource
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLProcessNetworkSource : NSObject
{
    NSDictionary * _descriptionDictionary;
    NSDictionary * _countsDictionary;
    struct __NStatSource * _source;
}

@property (copy, nonatomic) NSDictionary * descriptionDictionary;
@property (copy, nonatomic) NSDictionary * countsDictionary;
@property (nonatomic) struct __NStatSource * source;

- (struct __NStatSource *)source;
- (void)setSource:(struct __NStatSource *)arg0;
- (void).cxx_destruct;
- (PLProcessNetworkSource *)initWithSource:(struct __NStatSource *)arg0;
- (NSDictionary *)descriptionDictionary;
- (void)setDescriptionDictionary:(NSDictionary *)arg0;
- (NSDictionary *)countsDictionary;
- (void)setCountsDictionary:(NSDictionary *)arg0;

@end
