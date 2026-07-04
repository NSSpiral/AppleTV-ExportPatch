/* Runtime dump - OADTextRun
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTextRun : NSObject
{
    OADCharacterProperties * mProperties;
}

- (void)dealloc;
- (OADTextRun *)init;
- (char)isEmpty;
- (void)setProperties:(NSDictionary *)arg0;
- (NSDictionary *)properties;
- (void)removeUnnecessaryOverrides;
- (unsigned int)characterCount;

@end
