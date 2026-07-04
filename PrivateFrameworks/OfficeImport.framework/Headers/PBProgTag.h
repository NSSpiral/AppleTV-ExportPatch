/* Runtime dump - PBProgTag
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBProgTag : NSObject

+ (NSString *)binaryTagDataWithName:(unsigned short *)arg0 inProgTagsParent:(unsigned short)arg1;
+ (void)readClientData:(NSData *)arg0 state:(NSObject *)arg1;
+ (void)readDocumentList:(NSArray *)arg0 state:(NSObject *)arg1;
+ (void)readBulletStylesFromDocumentList:(NSArray *)arg0 state:(NSObject *)arg1;
+ (void)readBulletImagesFromDocumentList:(NSArray *)arg0 state:(NSObject *)arg1;
+ (void)readMacCharStylesFromDocumentList:(NSArray *)arg0 state:(NSObject *)arg1;
+ (void)readHyperlinkScreenTipsFromDocumentList:(NSArray *)arg0 state:(NSObject *)arg1;
+ (NSData *)readBulletStyleFromClientData:(NSData *)arg0;
+ (NSData *)readMacCharStyleFromClientData:(NSData *)arg0;
+ (NSString *)binaryTagDataWithName:(unsigned short *)arg0 inProgTags:(unsigned short)arg1;
+ (NSString *)ensureBinaryTagDataWithName:(unsigned short *)arg0 inProgTags:(unsigned short)arg1;
+ (struct PBTextFormatProgTagInfo *)textFormatInfoForProgTagName:(SEL)arg0;
+ (void)readBulletImagesFromContainerParent:(NSObject *)arg0 state:(NSObject *)arg1;
+ (NSString *)ensureBinaryTagDataWithName:(unsigned short *)arg0 inProgTagsParent:(unsigned short)arg1;
+ (void)readBulletStylesFromMainMaster:(id)arg0 state:(NSObject *)arg1;

@end
