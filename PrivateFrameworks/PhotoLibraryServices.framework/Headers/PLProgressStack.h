/* Runtime dump - PLProgressStack
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLProgressStack : NSObject
{
    char notifyUsingAssetsdNotificationCenter;
    id delegate;
    float currentMultiplier;
    NSMutableArray * multipliers;
    float currentTotal;
    NSString * mediaPathString;
}

@property (nonatomic) id delegate;
@property (nonatomic) float currentMultiplier;
@property (retain, nonatomic) NSMutableArray * multipliers;
@property (nonatomic) float currentTotal;
@property (nonatomic) char notifyUsingAssetsdNotificationCenter;
@property (retain, nonatomic) NSString * mediaPathString;

+ (NSDictionary *)unarchiveFromDictionary:(NSDictionary *)arg0;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)pop;
- (void)updateProgress:(float)arg0;
- (PLProgressStack *)initWithDelegate:(NSObject *)arg0;
- (void)setCurrentMediaPath:(NSString *)arg0;
- (void)setCurrentMultiplier:(float)arg0;
- (void)setMultipliers:(NSMutableArray *)arg0;
- (NSMutableArray *)multipliers;
- (float)currentTotal;
- (float)currentMultiplier;
- (void)setCurrentTotal:(float)arg0;
- (void)setMediaPathString:(NSString *)arg0;
- (float)totalProgress:(float)arg0;
- (char)notifyUsingAssetsdNotificationCenter;
- (NSString *)mediaPathString;
- (void)setNotifyUsingAssetsdNotificationCenter:(char)arg0;
- (void)push:(float)arg0;
- (void)popAndUpdate;
- (NSDictionary *)archiveToDictionary;

@end
