/* Runtime dump - PBBulletProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBBulletProperties : NSObject

+ (int)readBulletNumberScheme:(int)arg0;
+ (NSDictionary *)readBulletProperties:(struct PptParaProperty9 *)arg0 state:(short)arg1;
+ (int)readBulletNumberSchemeFromExtended:(unsigned int)arg0;
+ (int)writeBulletNumberScheme:(int)arg0;

@end
