/* Runtime dump - CAMEffectFilterManager
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMEffectFilterManager : NSObject
{
    NSMutableArray * _effects;
    NSMutableArray * _names;
    NSMutableArray * _aggdNames;
}

+ (CAMEffectFilterManager *)sharedInstance;

- (CAMEffectFilterManager *)init;
- (void).cxx_destruct;
- (NSObject *)filterForIndex:(unsigned int)arg0;
- (unsigned int)blackAndWhiteFilterStartIndex;
- (void)_addEffectNamed:(id)arg0 aggdName:(NSString *)arg1 filter:(id /* block */)arg2;
- (unsigned int)_indexForFilter:(NSObject *)arg0;
- (unsigned int)blackAndWhiteFilterCount;
- (NSObject *)displayNameForIndex:(unsigned int)arg0;
- (NSObject *)displayNameForFilter:(NSObject *)arg0;
- (NSObject *)aggdNameForFilter:(NSObject *)arg0;
- (unsigned int)filterCount;

@end
