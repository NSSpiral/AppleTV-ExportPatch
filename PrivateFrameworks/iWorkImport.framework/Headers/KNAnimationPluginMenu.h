/* Runtime dump - KNAnimationPluginMenu
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimationPluginMenu : NSObject
{
    NSMutableDictionary * mLocalizedStringToDirectionMap;
    NSMutableDictionary * mDirectionToLocalizedStringMap;
    unsigned int mDefaultDirection;
    NSMutableArray * mLocalizedDirections;
    NSMutableArray * mDirections;
}

@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) NSArray * localizedDirections;
@property (readonly, nonatomic) NSArray * directions;
@property (nonatomic) unsigned int defaultDirection;

+ (KNAnimationPluginMenu *)animationPluginMenu;
+ (KNAnimationPluginMenu *)localizedStringForDirection:(unsigned int)arg0 shortVersion:(char)arg1;

- (unsigned int)defaultDirection;
- (void)setDefaultDirection:(unsigned int)arg0;
- (char)containsDirection:(unsigned int)arg0;
- (void)addDirection:(unsigned int)arg0 localizedMenuString:(NSString *)arg1;
- (void)addDirection:(unsigned int)arg0 useShortString:(char)arg1;
- (unsigned int)indexForDirection:(unsigned int)arg0;
- (unsigned int)directionForIndex:(unsigned int)arg0;
- (NSArray *)localizedDirections;
- (void)dealloc;
- (unsigned int)count;
- (KNAnimationPluginMenu *)init;
- (NSArray *)directions;

@end
