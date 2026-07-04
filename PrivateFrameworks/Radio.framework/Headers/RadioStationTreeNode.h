/* Runtime dump - RadioStationTreeNode
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationTreeNode : NSObject <NSCopying, NSMutableCopying>
{
    RadioArtworkCollection * _artworkCollection;
    int _childNodeLoadingStyle;
    NSArray * _childNodes;
    int _displayStyle;
    char _hasAdditionalChildNodes;
    NSString * _name;
    long long _nodeID;
    NSDictionary * _stationDictionary;
    NSDictionary * _stationTreeNodeDictionary;
}

@property (readonly, copy, nonatomic) RadioArtworkCollection * artworkCollection;
@property (readonly, nonatomic) int childNodeLoadingStyle;
@property (readonly, copy, nonatomic) NSArray * childNodes;
@property (readonly, nonatomic) int displayStyle;
@property (readonly, nonatomic) char hasAdditionalChildNodes;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, nonatomic) long long nodeID;
@property (readonly, copy, nonatomic) NSDictionary * stationDictionary;
@property (readonly, copy, nonatomic) NSDictionary * stationTreeNodeDictionary;

- (int)displayStyle;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (RadioStationTreeNode *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)childNodes;
- (RadioStationTreeNode *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (RadioArtworkCollection *)artworkCollection;
- (NSDictionary *)stationDictionary;
- (RadioStationTreeNode *)initWithStationTreeNodeDictionary:(NSDictionary *)arg0;
- (long long)nodeID;
- (int)childNodeLoadingStyle;
- (char)hasAdditionalChildNodes;
- (NSDictionary *)stationTreeNodeDictionary;

@end
