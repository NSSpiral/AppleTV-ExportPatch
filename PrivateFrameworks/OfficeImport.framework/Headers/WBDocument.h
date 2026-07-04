/* Runtime dump - WBDocument
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBDocument : NSObject

+ (void)setTimeStamp:(struct WrdDocumentProperties *)arg0;
+ (void)readProperties:(NSDictionary *)arg0 document:(NSObject *)arg1;
+ (void)setupZIndices:(id)arg0 document:(NSObject *)arg1 escherType:(int)arg2;
+ (void)readSectionsFrom:(NSObject *)arg0 document:(NSObject *)arg1;
+ (void)readTextBoxesFrom:(NSObject *)arg0;
+ (void)readNoteSeparatorFrom:(NSObject *)arg0 type:(int)arg1 separator:(SBJsonStreamParserStateObjectSeparator *)arg2;
+ (NSObject *)readFrom:(NSObject *)arg0;

- (WBDocument *)init;
- (NSString *)applicationName;

@end
