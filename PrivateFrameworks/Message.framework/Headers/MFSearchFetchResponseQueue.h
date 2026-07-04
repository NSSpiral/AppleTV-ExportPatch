/* Runtime dump - MFSearchFetchResponseQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFSearchFetchResponseQueue : MFFetchResponseQueue

- (MFSearchFetchResponseQueue *)init;
- (char)shouldAddUID:(unsigned int)arg0;
- (id)messageToSyncFlagsForUID:(unsigned int)arg0;

@end
