/* Runtime dump - TCMessageException
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCMessageException : NSException
{
    TCMessageEntry * m_entry;
}

+ (void)initialize;
+ (NSString *)exceptionWithMessage:(struct TCTaggedMessageStructure *)arg0;
+ (NSString *)exceptionWithUntaggedMessage:(NSString *)arg0;
+ (void)raise:(struct TCTaggedMessageStructure *)arg0;
+ (void)raiseUntaggedMessage:(NSString *)arg0;
+ (NSError *)nsError:(NSError *)arg0 domain:(NSString *)arg1;

- (void)dealloc;
- (NSString *)description;
- (id)getEntry;
- (TCMessageException *)initWithMessage:(struct TCTaggedMessageStructure *)arg0;
- (TCMessageException *)initWithUntaggedMessage:(NSString *)arg0;

@end
