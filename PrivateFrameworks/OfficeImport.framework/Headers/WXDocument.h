/* Runtime dump - WXDocument
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXDocument : NSObject

+ (void)initialize;
+ (void)readFontTable:(id)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readStyles:(id)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readLists:(id)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readSources:(id)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readDocumentSettings:(NSDictionary *)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)readDocument:(NSObject *)arg0 to:(NSObject *)arg1 state:(NSObject *)arg2;
+ (NSObject *)documentFrom:(NSObject *)arg0 reader:(NSObject *)arg1 cancel:(char)arg2 asThumbnail:(char)arg3;

@end
