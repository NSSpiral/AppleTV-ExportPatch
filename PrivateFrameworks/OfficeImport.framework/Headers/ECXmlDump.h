/* Runtime dump - ECXmlDump
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ECXmlDump : NSObject

+ (struct _xmlNode *)xmlNodeWithName:(struct _xmlNode *)arg0 forObject:(struct _xmlNode *)arg1;
+ (struct _xmlNode *)xmlNodeForObject:(struct _xmlNode *)arg0;

- (BOOL)isXmlNodeNeeded;
- (void)addXmlProperties:(struct _xmlNode *)arg0;

@end
