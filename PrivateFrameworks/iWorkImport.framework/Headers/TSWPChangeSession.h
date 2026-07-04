/* Runtime dump - TSWPChangeSession
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPChangeSession : TSPObject
{
    unsigned long _sessionUID;
    TSKAnnotationAuthor * _author;
    NSDate * _date;
}

@property (nonatomic) unsigned long sessionUID;
@property (retain, nonatomic) TSKAnnotationAuthor * author;
@property (retain, nonatomic) NSDate * date;

+ (char)needsObjectUUID;

- (TSWPChangeSession *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (char)isEqualToSession:(NSObject *)arg0;
- (unsigned long)sessionUID;
- (void)setSessionUID:(unsigned long)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (void)setAuthor:(TSKAnnotationAuthor *)arg0;
- (TSKAnnotationAuthor *)author;

@end
