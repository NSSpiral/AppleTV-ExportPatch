/* Runtime dump - OITSUHTMLLog
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUHTMLLog : NSObject
{
    NSString * _path;
    NSString * _title;
    NSString * _stylesheet;
    NSString * _script;
    NSFileHandle * _handle;
    char _logStarted;
    unsigned int _uniquifier;
    unsigned int _tableRow;
}

@property (readonly, nonatomic) NSString * path;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * stylesheet;
@property (copy, nonatomic) NSString * script;

- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)path;
- (void)close;
- (void)clear;
- (NSString *)script;
- (OITSUHTMLLog *)initWithPath:(NSString *)arg0;
- (void)setScript:(NSString *)arg0;
- (void)logBegin;
- (void)_writeMarkupData:(NSData *)arg0;
- (void)writeMarkup:(id)arg0;
- (NSString *)uniqueIdentifierWithPrefix:(NSString *)arg0;
- (void)writeText:(NSString *)arg0;
- (void)logEnd;
- (void)openInBrowser;
- (NSString *)stylesheet;
- (void)setStylesheet:(NSString *)arg0;

@end
