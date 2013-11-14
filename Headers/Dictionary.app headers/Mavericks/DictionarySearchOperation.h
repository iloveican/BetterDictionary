//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 14 2013 08:30:39).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class DictionaryObj, NSArray, NSOperationQueue, NSString;

@interface DictionarySearchOperation : NSOperation
{
    DictionaryObj *_dictionary;
    NSString *_searchString;
    long long _searchMethod;
    long long _maxRecord;
    BOOL _allowGuess;
    NSArray *_guessedWords;
    long long _transactionID;
    NSOperationQueue *_queue;
    void *_userInfo;
}

- (void)main;
- (void)dealloc;
- (id)_commonInitWithDictionary:(id)arg1 searchString:(id)arg2 transactionID:(long long)arg3 queue:(id)arg4 userInfo:(void *)arg5;
- (id)initWithDictionary:(id)arg1 searchString:(id)arg2 guessedWords:(id)arg3 transactionID:(long long)arg4 queue:(id)arg5 userInfo:(void *)arg6;
- (id)initWithDictionary:(id)arg1 searchString:(id)arg2 searchMethod:(long long)arg3 maxRecord:(long long)arg4 allowGuess:(BOOL)arg5 transactionID:(long long)arg6 queue:(id)arg7 userInfo:(void *)arg8;

@end

