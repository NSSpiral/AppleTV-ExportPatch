/* Runtime dump - RadioMutableStationTreeNode
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property (copy, nonatomic) RadioArtworkCollection * artworkCollection;
@property (nonatomic) int childNodeLoadingStyle;
@property (copy, nonatomic) NSArray * childNodes;
@property (nonatomic) int displayStyle;
@property (nonatomic) char hasAdditionalChildNodes;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) long long nodeID;
@property (copy, nonatomic) NSDictionary * stationDictionary;

- (void)setName:(NSString *)arg0;
- (RadioMutableStationTreeNode *)copyWithZone:(struct _NSZone *)arg0;
- (void)setArtworkCollection:(RadioArtworkCollection *)arg0;
- (void)setChildNodeLoadingStyle:(int)arg0;
- (void)setChildNodes:(NSArray *)arg0;
- (void)setHasAdditionalChildNodes:(char)arg0;
- (void)setNodeID:(long long)arg0;
- (void)setStationDictionary:(NSDictionary *)arg0;
- (void)setDisplayStyle:(int)arg0;

@end
