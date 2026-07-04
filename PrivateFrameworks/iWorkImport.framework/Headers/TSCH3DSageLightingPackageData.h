/* Runtime dump - TSCH3DSageLightingPackageData
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData>
{
    NSDictionary * mPackage;
    NSArray * mLights;
}

+ (NSDictionary *)dataWithDictionary:(NSDictionary *)arg0;

- (struct Color)colorAtIndex:(unsigned int)arg0 redKey:(NSString *)arg1 greenKey:(NSString *)arg2 blueKey:(NSString *)arg3;
- (NSString *)packageName;
- (int)typeAtIndex:(unsigned int)arg0;
- (struct Color)ambientColorAtIndex:(unsigned int)arg0;
- (struct Color)diffuseColorAtIndex:(unsigned int)arg0;
- (struct Color)specularColorAtIndex:(unsigned int)arg0;
- (float)intensityAtIndex:(unsigned int)arg0;
- (int)coordinateSpaceAtIndex:(unsigned int)arg0;
- (char)enabledAtIndex:(unsigned int)arg0;
- (struct Vector3)attenuationAtIndex:(unsigned int)arg0;
- (struct Vector3)positionAtIndex:(unsigned int)arg0;
- (struct Vector3)directionAtIndex:(unsigned int)arg0;
- (float)cutOffAngleAtIndex:(unsigned int)arg0;
- (float)dropOffRateAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (unsigned int)count;
- (TSCH3DSageLightingPackageData *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)nameAtIndex:(unsigned int)arg0;

@end
