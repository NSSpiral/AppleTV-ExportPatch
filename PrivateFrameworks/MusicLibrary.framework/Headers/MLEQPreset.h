/* Runtime dump - MLEQPreset
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLEQPreset : NSObject
{
    NSString * _name;
    NSString * _localizedName;
    int _builtInPresetType;
}

+ (NSObject *)eqPresetForBuiltInPresetType:(int)arg0;
+ (NSString *)eqPresetForName:(NSString *)arg0;

- (NSString *)name;
- (NSString *)localizedName;
- (void).cxx_destruct;
- (MLEQPreset *)initWithBuiltInPresetType:(int)arg0;
- (int)builtInPresetType;
- (int)typeForAVController;

@end
