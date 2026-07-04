/* Runtime dump - TCMessageEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessageEntry : NSObject
{
    unsigned int m_timeStamp;
    int m_tag;
    NSString * m_text;
    NSArray * m_parameters;
    NSMutableArray * m_affectedObjects;
    int m_count;
}

@property (nonatomic) unsigned int timeStamp;

+ (void)initialize;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)timeStamp;
- (void)setTimeStamp:(unsigned int)arg0;
- (NSString *)getMessageText;
- (void)mergeEntries:(NSArray *)arg0;
- (TCMessageEntry *)initWithTag:(int)arg0 affectedObject:(NSObject *)arg1 text:(NSString *)arg2 parameters:(void *)arg3;
- (void)addAffectedObject:(NSObject *)arg0;
- (int)timeStampCompare:(NSObject *)arg0;
- (int)getMessageTag;
- (int)getCount;
- (NSSet *)affectedObjects;
- (unsigned int)getParameterCount;
- (id)getParameter:(unsigned int)arg0;
- (void)logWithCat:(id)arg0;

@end
