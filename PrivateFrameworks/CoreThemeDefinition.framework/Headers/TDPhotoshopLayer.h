/* Runtime dump - TDPhotoshopLayer
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopLayer : NSManagedObject

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) TDPhotoshopLayer * childLayer;
@property (retain, nonatomic) TDPhotoshopLayer * parentLayer;
@property (retain, nonatomic) TDPhotoshopRenditionSpec * rendition;

- (NSArray *)hierarchicalLayerNames;

@end
