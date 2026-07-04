/* Runtime dump - EBOfficeArtReaderClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBOfficeArtReaderClient : NSObject <OABReaderClient>

+ (char)tablesAreAllowed;
+ (void)readClientDataFromShape:(ESDObject *)arg0 toGraphic:(OADGraphic *)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromGroup:(ESDContainer *)arg0 toGroup:(OADGroup *)arg1 state:(OABReaderState *)arg2;
+ (void)readClientDataFromTableCell:(ESDObject *)arg0 toTableCell:(OADTableCell *)arg1 state:(OABReaderState *)arg2;
+ (char)escherIsFullySupported;
+ (void)readEshClientAnchor:(struct XlEshClientAnchor *)arg0 targetClientData:(struct XlEshClientAnchor)arg1 state:(unsigned short)arg2;
+ (void)setAutoInsetForShape:(struct EshShape *)arg0;

@end
