/* Runtime dump - GEOPointUtility
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPointUtility : NSObject

+ (unsigned int)pointCount:(struct Matrix<float, 2, 1>)arg0 usesZilch:(char)arg1;
+ (GEOPointUtility *)unpackZilchPoints:(id)arg0;
+ (GEOPointUtility *)unpackBasicPoints:(id)arg0;
+ (void *)controlPoints:(void *)arg0 usesZilch:(char)arg1;
+ (char)zilchPointsSupported;
+ (struct ?)pointAt:(unsigned int)arg0 pointData:(NSData *)arg1 usesZilch:(char)arg2;
+ (GEOPointUtility *)unpackPoints:(id)arg0 usesZilch:(char)arg1;
+ (NSData *)zilchData:(NSData *)arg0 fromPointIndex:(unsigned int)arg1;

@end
