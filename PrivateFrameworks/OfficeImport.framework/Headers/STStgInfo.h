/* Runtime dump - STStgInfo
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface STStgInfo : NSObject
{
    NSString * m_pstrName;
    int m_type;
    unsigned long m_userFlags;
    unsigned long m_size;
    long m_creationTime;
    long m_modificationTime;
    int m_accessMode;
    struct ? m_clsid;
}

- (void)dealloc;
- (STStgInfo *)init;
- (void)setName:(NSString *)arg0;
- (void)setType:(int)arg0;
- (void)setSize:(unsigned long)arg0;
- (void)setCreationTime:(long)arg0;
- (NSString *)getName;
- (void)setCLSID:(struct ?)arg0;
- (int)getType;
- (unsigned long)getUserFlags;
- (void)setUserFlags:(unsigned long)arg0;
- (unsigned long)getSize;
- (long)getCreationTime;
- (long)getModificationTime;
- (void)setModificationTime:(long)arg0;
- (int)getAccessMode;
- (void)setAccessMode:(int)arg0;
- (struct ?)getCLSID;
- (STStgInfo *)initWithStgInfo:(struct _StgInfo *)arg0;

@end
