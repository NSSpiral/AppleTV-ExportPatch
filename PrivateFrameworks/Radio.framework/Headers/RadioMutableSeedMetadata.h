/* Runtime dump - RadioMutableSeedMetadata
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableSeedMetadata : RadioSeedMetadata

@property (copy, nonatomic) NSString * seedDescription;
@property (copy, nonatomic) NSString * subtitle;
@property (copy, nonatomic) NSString * title;

- (void)setTitle:(NSString *)arg0;
- (RadioMutableSeedMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (void)setSeedDescription:(NSString *)arg0;

@end
